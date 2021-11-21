#pragma once

class cVecotor3F
{
public:
    float** Xyz;

    float* X;
    float* Y;
    float* Z;

    cVecotor3F()
    {
        Cm();

        std::cout << "Created " << this << " Object!" << std::endl;
    }

    cVecotor3F(const float& x, const float& y, const float& z)
    {
        Cm();

        *X = x;
        *Y = y;
        *Z = z;

        std::cout << "Created " << this << " Object!" << std::endl;
    }

    cVecotor3F(const float& scalar)
    {
        Cm();

        *X = scalar;
        *Y = scalar;
        *Z = scalar;

        std::cout << "Created " << this << " Object!" << std::endl;
    }

    cVecotor3F(const cVecotor3F& source)
    {
        Cm();

        *X = *source.X;
        *Y = *source.Y;
        *Z = *source.Y;
    }

    cVecotor3F(cVecotor3F&& source)
    {
        Xyz = source.Xyz;
        
        X = source.X;
        Y = source.Y;
        Z = source.Y;

        source.Em();
    }

    void Cm()
    {
        Xyz = (float**)calloc(3, sizeof(float*));
        
        for (size_t i = 0; i < 3; i++) Xyz[i] = (float*)calloc(1, sizeof(float));

        X = Xyz[0];
        Y = Xyz[1];
        Z = Xyz[2];
    }

    void Em()
    {
        Xyz = nullptr;

        X = nullptr;
        Y = nullptr;
        Z = nullptr;
    }

    void Dm() const
    {
        delete[] Xyz;
    }

    ~cVecotor3F()
    {
        Dm();

        std::cout << "Destroyed " << this << " Object!" << std::endl;
    }
};