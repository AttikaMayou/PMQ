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
        Quaternion somme(Quaternion q, Quaternion q2);

        float GetX();
        float GetY();
        float GetZ();
        float GetW();
        void SetX();
        void SetY();
        void SetZ();
        void SetW();

    protected:
    private:
        float x;
        float y;
        float z;
        float w;
};

#endif // QUATERNION_H
