#ifndef QUATERNION_H
#define QUATERNION_H

class Quaternion
{
    public:
        Quaternion(float x, float y, float z, float w);
        virtual ~Quaternion();


        Quaternion& operator+=(const Quaternion &a);
        Quaternion& operator*(Quaternion q2);
        Quaternion& operator*(float a);
        Quaternion somme(Quaternion q);

        float GetX();
        float GetY();
        float GetZ();
        float GetW();
        void SetX(float MaValeur);
        void SetY(float MaValeur);
        void SetZ(float MaValeur);
        void SetW(float MaValeur);

        void displayQuaternion() const;

    protected:
    private:
        float m_x;
        float m_y;
        float m_z;
        float m_w;
};

Quaternion operator+(Quaternion const& a, Quaternion const& b);



#endif // QUATERNION_H
