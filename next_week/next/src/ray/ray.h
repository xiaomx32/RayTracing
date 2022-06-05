#ifndef RAY_H
#define RAY_H

#include "../vec3/vec3.h"

/*
* 在快门打开时，随着时间变化随机生成光线，并同时发出射线与模型相交
* 让摄像机和物体同时运动，并让每一条射线都拥有自己存在的一个时间点
* 这样光线追踪器的“引擎”就能确定，对于指定的某条光线来说，在该时刻，物体到底在哪儿
* 求射线与球相交的部分写法和之前并没有太多区别
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
