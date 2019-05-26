#ifndef QUATERNION_H
#define QUATERNION_H


class Quaternion
{
    public:
        Quaternion(float x, float y, float z, float w);
        virtual ~Quaternion();

        Quaternion& operator+(Quaternion q2);
        Quaternion& operator*(Quaternion q2);
        Quaternion& operator*(float a);
    protected:
    private:
        float x;
        float y;
        float z;
        float w;
};

#endif // QUATERNION_H
