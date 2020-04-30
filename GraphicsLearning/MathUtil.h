#pragma once
#ifndef __MATHUTIL_H_INCLUDED
#define __MATHUTIL_H_INCLUDED

#include <math.h>

// �����pi�йصĳ���

const float kPi = 3.14159265f;
const float k2Pi = kPi * 2.0f;
const float kPiOver2 = kPi / 2.0f;
const float k1OverPi = 1.0f / kPi;
const float k1Over2Pi = 1.0f / k2Pi;
// ͨ�����ʵ���2pi�������Ƕ�������-pi��pi��������
extern float wrapPi(float theta);
// ��ȫ�ķ����Ǻ���
extern float safeAcos(float x);
// ����Ƕȵ�sin��cosֵ
// ��ĳЩƽ̨�ϣ������Ҫ������ֵ��ͬʱ����Ҫ�ȷֿ������
inline void sinCos(float *returnSin, float *returnCos, float theta)
{
	// Ϊ�˼򵥣�����ֻʹ�ñ�׼���Ǻ���
	// ע����ĳЩƽ̨�Ͽ������ĸ���һЩ
	*returnSin = sin(theta);
	*returnCos = cos(theta);
}

#endif