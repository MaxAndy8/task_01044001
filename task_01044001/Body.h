#pragma once

class Body { // �����
protected:
    int doorCount = 0; // ʳ������ ������
    int seatCount = 0; // ʳ������ ����
public:
    Body(int doors = 1, int seats = 1) : doorCount(doors), seatCount(seats) {}
    virtual int getDoorCount() const { return doorCount; }
    virtual int getSeatCount() const { return seatCount; }
    virtual ~Body() {}
};

