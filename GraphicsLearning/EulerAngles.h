#ifndef __EULERANGLES_H_INCLUDED__
#define __EULERANGLES_H_INCLUDED__

// Ԥ����

class Quaternion;
class Matrix4x3;
class RotationMatrix;

// class EulerAngles
// �������ڱ�ʾheading-pitch-bankŷ����ϵͳ
class EulerAngles
{
public:
	// ֱ�ӵı�ʾ��ʽ
	// �û��ȱ��������Ƕ�
	float heading;
	float pitch;
	float bank;

	// ȱʡ���캯��
	EulerAngles() {}
	// ������������
	EulerAngles(float h, float p, float b) :heading(h), pitch(p), bank(b) {}

	// ����
	void identity() {pitch=bank=heading=0.0f}

	// �任Ϊ�����Ƽ���ŷ����
	void canonize();

	// ����Ԫ��ת����ŷ����
	// �������Ԫ������Ϊ����-���Ի����-������Ԫ������������ʾ
	void fromObjectToInertialQuaternion(const Quaternion &q);
	void fromInertialToObjectQuaternion(const Quaternion &q);

	// �Ӿ���ת����ŷ����
	// ����������Ϊ����-���������-����ת������
	// ƽ�Ʋ��ֱ�ʡ�ԣ����Ҽ��������������
	void fromObjectToWorldMatrix(const Matrix4x3 &m);
	void fromWorldToObjectMatrix(const Matrix4x3 &m);

	// ����ת����ת����ŷ����
	void fromRotationMatrix(const RotationMatrix &m);
};

// ȫ�ֵġ���λ��ŷ����
extern const EulerAngles kEulerAnglesIdentity;

#endif