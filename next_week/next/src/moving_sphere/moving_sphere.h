#ifndef MOVING_SPHERE_H
#define MOVING_SPHERE_H

/*
* 新的 sphere 类
* 让它的球心在 `time0` 到 `time1` 的时间段内
* 从 `center0` 线性运动到 `center1`，
* 超出这个时间段, 这个球心依然在动
*/
#include "../rtweekend/rtweekend.h"
#include "../hittable/hittable.h"

class moving_sphere : public hittable {
public:
    moving_sphere();
    moving_sphere(
        point3 cen0,
        point3 cen1,
        double _time0,
        double _time1,
        double r,
        shared_ptr<material> m
    );

    virtual bool hit(
        const ray& r,
        double t_min,
        double t_max,
        hit_record& rec
    ) const override;

    point3 center(double time) const;

public:
    point3 center0, center1;
    double time0 = 0.0, time1 = 0.0;
    double radius = 0.0;
    shared_ptr<material> mat_ptr;
};
#endif
