#ifndef HITTABLE_H
#define HITTABLE_H

#include "../aabb/aabb.h"
#include "../ray/ray.h"
#include "../rtweekend/rtweekend.h"

class material;

struct hit_record {
	hit_record();
	vec3 p;
	vec3 normal;
	shared_ptr<material> mat_ptr;
	double t;
	double u;
	double v;
	bool front_face;

	void set_face_normal(const ray& r, const vec3& outward_normal);
};

class hittable {
public:

	virtual bool hit(const ray& r, double t_min, double t_max, hit_record& rec) const = 0;
	virtual bool bounding_box(double time0, double time1, aabb& output_box) const = 0;

};
#endif
