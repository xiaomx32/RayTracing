#include "ray.h"

ray::ray() {}

ray::ray(
    const point3& origin,
    const vec3& direction,
    double time = 0.0
) : orig(origin), dir(direction), tm(time) {}

point3 ray::origin() const { return orig; }

vec3 ray::direction() const { return dir; }

double ray::time() const { return tm; }

point3 ray::at(double t) const { return orig + t * dir; }
