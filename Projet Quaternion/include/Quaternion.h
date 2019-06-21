#ifndef QUATERNION_H
#define QUATERNION_H

class Quaternion
{
    public:
        Quaternion(float x, float y, float z, float w);
        virtual ~Quaternion();

        Quaternion operator+(Quaternion const& q, Quaternion const& q2);
        Quaternion operator*(Quaternion const& q, Quaternion const& q2);
        Quaternion operator*(Quaternion const& q, float a);
        void somme(Quaternion q);
        void multiply(Quaternion q);
        void multiply(float a);

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

bool operator==(Quaternion const& a, Quaternion const& b);

#endif // QUATERNION_H
