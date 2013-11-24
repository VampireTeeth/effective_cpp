#ifndef HEADER_AIRLINE_H_
#define HEADER_AIRLINE_H_

#include <string>

namespace std {
    class Airport{
    public:
        Airport(std::string& name);
        virtual ~Airport();
        const std::string& name() const;

    private:
        std::string _name;
    
    };

    class AirPlane{
    public:
        AirPlane();
        virtual ~AirPlane();
        virtual void fly(const Airport& destination) = 0;
    };

    class ModelA : public AirPlane{
        virtual void fly(const Airport& destination);
    };

    class ModelB : public AirPlane{
        virtual void fly(const Airport& destination);
    };

    class ModelC : public AirPlane{
        virtual void fly(const Airport& destination);
    };
}
#endif

