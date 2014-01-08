#ifndef MATH3D_INCLUDED_H
#define MATH3D_INCLUDED_H

#include <glm.hpp>
/*
namespace Math3D
{
	static const double PI = 3.1415926535897932384626433832795;
	static const double PIOVER2 = PI / 2.0;
	static const double PIOVER180 = PI / 180.0;

	static inline double ToRadians(double x) { return PIOVER180 * x; }
	static inline double ToDegrees(double x) { return 180.0 * x / PI; }
};

struct Vector3f
{
public:
	Vector3f(float x = 0.0f, float y = 0.0f, float z = 0.0f)
	{
		data.x = x;
		data.y = y;
		data.z = z;
	}

	inline float GetX() const { return data.x; }
	inline float GetY() const { return data.y; }
	inline float GetZ() const { return data.z; }

	inline void SetX(float x) { data.x = x; }
	inline void SetY(float y) { data.y = y; }
	inline void SetZ(float z) { data.z = z; }

	inline glm::vec3& GetRawVector() const { return glm::vec3(data); }

	inline float Length()
	{
		return sqrtf(this->Dot(*this));
	}

	inline Vector3f Normalized()
	{
		return *this / Length();
	}

	inline float Dot(const Vector3f& r) const
	{
		return glm::dot(data, r.GetRawVector());
	}

	inline Vector3f Cross(const Vector3f& r) const
	{
		return Vector3f(glm::cross(data, r.GetRawVector()));
	}

	inline Vector3f Rotate(const Vector3f& axis, float angle) const
	{
		float sinAngle = sinf(angle);
		float cosAngle = cosf(angle);

		return this->Cross(axis * sinAngle) +           //Rotation on local X
			   (*this * cosAngle) +                     //Rotation on local Z
			   axis * this->Dot(axis * (1 - cosAngle)); //Rotation on local Y
	}

	inline void operator+=(const Vector3f& r)
	{
		data.x += r.GetX();
		data.y += r.GetY();
		data.z += r.GetZ();
	}

	inline Vector3f operator+(const Vector3f& r) const
	{
		return Vector3f(data.x + r.GetX(),
			            data.y + r.GetY(),
						data.z + r.GetZ());
	}

	inline Vector3f operator*(float r) const
	{
		return Vector3f(data.x * r,
						data.y * r,
						data.z * r);
	}

	inline Vector3f operator/(float r) const
	{
		return Vector3f(data.x / r,
						data.y / r,
						data.z / r);
	}

private:
	Vector3f(glm::vec3& data)
	{
		this->data.x = data.x;
		this->data.y = data.y;
		this->data.z = data.z;
	}
	glm::vec3 data;
};

struct Vector2f
{
public:
	Vector2f(float x = 0.0f, float y = 0.0f)
	{
		data.x = x;
		data.y = y;
	}

	inline float GetX() const { return data.x; }
	inline float GetY() const { return data.y; }

	inline void SetX(float x) { data.x = x; }
	inline void SetY(float y) { data.y = y; }

private:
	DirectX::XMFLOAT2 data;
};

struct Matrix4f
{
public:
	static Matrix4f InitTranslation(const Vector3f& translation)
	{
		return Matrix4f(DirectX::XMMatrixTranslation(translation.GetX(), translation.GetY(), translation.GetZ()));
	}

	static Matrix4f InitRotation(const Vector3f& eulerAngles)
	{
		return Matrix4f(DirectX::XMMatrixRotationRollPitchYaw(eulerAngles.GetX(), eulerAngles.GetY(), eulerAngles.GetZ()));
	}

	static Matrix4f InitScale(const Vector3f& scale)
	{
		return Matrix4f(DirectX::XMMatrixScaling(scale.GetX(), scale.GetY(), scale.GetZ()));
	}

	static Matrix4f InitLookTo(const Vector3f& eye, const Vector3f& direction, const Vector3f& up)
	{
		return Matrix4f(DirectX::XMMatrixLookToLH(eye.GetDXVector(), direction.GetDXVector(), up.GetDXVector()));
	}

	static Matrix4f InitPerspective(float angle, float aspect, float zNear, float zFar)
	{
		return Matrix4f(DirectX::XMMatrixPerspectiveFovLH(angle, aspect, zNear, zFar));
	}

	Matrix4f()
	{
		m_Data = DirectX::XMMatrixIdentity();
	}

	Matrix4f Inverse() const
	{
		return Matrix4f(DirectX::XMMatrixInverse(NULL, m_Data));
	}

	Matrix4f Transpose() const
	{
		return Matrix4f(DirectX::XMMatrixTranspose(m_Data));
	}

	inline Matrix4f operator*(const Matrix4f& r) const
	{
		return Matrix4f(m_Data * r.m_Data);
	}
private:
	Matrix4f(const DirectX::XMMATRIX& data)
	{
		m_Data = data;
	}

	DirectX::XMMATRIX m_Data;
};
*/
#endif