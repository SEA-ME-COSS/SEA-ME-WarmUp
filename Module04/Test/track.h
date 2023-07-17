#ifndef TRACK_H
#define TRACK_H

#include <vector>

class Track
{
public:
    Track();
    bool isPointin(int point_x, int point_y);
    bool check;
    
private:
    std::vector<std::vector<int>> track_info;
};


#endif // TRACK_H
