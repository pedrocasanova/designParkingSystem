class ParkingSystem {
private:
    int bigParkingSpaces, mediumParkingSpaces, smallParkingSpaces;
public:
    ParkingSystem(int big, int medium, int small) 
    {
        bigParkingSpaces = big;
        mediumParkingSpaces = medium;
        smallParkingSpaces = small;
    }
    bool addCar(int carType) 
    {
        if(carType == 1)
        {
            if(bigParkingSpaces > 0)
            {
                bigParkingSpaces--;
                return true;
            }
            else 
            {
                return false;
            }
        }
        else if(carType == 2)
        {
            if(mediumParkingSpaces > 0)
            {
                mediumParkingSpaces--;
                return true;
            }
            else 
            {
                return false;
            }
        }
        else
        {
            if(smallParkingSpaces > 0)
            {
                smallParkingSpaces--;
                return true;
            }
            else 
            {
                return false;
            }
        }
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */