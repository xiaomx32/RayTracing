#ifndef RAY_H
#define RAY_H

#include "../vec3/vec3.h"

/*
* �ڿ��Ŵ�ʱ������ʱ��仯������ɹ��ߣ���ͬʱ����������ģ���ཻ
* �������������ͬʱ�˶�������ÿһ�����߶�ӵ���Լ����ڵ�һ��ʱ���
* ��������׷�����ġ����桱����ȷ��������ָ����ĳ��������˵���ڸ�ʱ�̣����嵽�����Ķ�
* �����������ཻ�Ĳ���д����֮ǰ��û��̫������
*/
class ray {

public:
    ray();

    ray(
        const point3& origin,
        const vec3& direction,
        double time
    );


    point3 origin() const;
    vec3 direction() const;
    double time() const;

    point3 at(double t) const;

public:
    point3 orig;
    vec3 dir;
    double tm = 0.0;
};

#endif
