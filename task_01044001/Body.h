#pragma once

class Body { // Кузов
protected:
    int doorCount = 0; // Кількість дверей
    int seatCount = 0; // Кількість місць
public:
    Body(int doors = 1, int seats = 1) : doorCount(doors), seatCount(seats) {}
    virtual int getDoorCount() const { return doorCount; }
    virtual int getSeatCount() const { return seatCount; }
    virtual ~Body() {}
};

