class ParkingSystem {
public:
    int store[3];
    ParkingSystem(int big, int medium, int small) {
        store[0] = big;
        store[1] = medium;
        store[2] = small;
    }
    
    bool addCar(int carType) {
        if(store[carType-1]>0){
            store[carType-1]--;
            return true;
        }
        else
        {
            return false;
        }
    }
   
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */