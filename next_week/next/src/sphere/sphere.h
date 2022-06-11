#ifndef SPHERE_H
#define SPHERE_H

#include "../vec3/vec3.h"
#include "../hittable/hittable.h"

class sphere : public hittable {
public:
	sphere();
	sphere(point3 cen, double r, shared_ptr<material> m);

	virtual bool hit(const ray& r, double t_min, double t_max, hit_record& rec) const override;
	virtual bool bounding_box(double time0, double time1, aabb& output_box) const override;

public:
	point3 center;
	double radius = 0.0;
	shared_ptr<material> mat_ptr;

private:
	static void get_sphere_uv(const point3& p, double& u, double& v);
};
#endif
