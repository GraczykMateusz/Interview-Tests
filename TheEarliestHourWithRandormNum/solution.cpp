#include <vector>

std::vector<int> setTime(std::vector<int> rv) {
  std::vector<int> sv;
   //x0:00:00 <0;2>
  if(rv[0] <= 2) {
    sv.push_back(rv[0]);
  } else {
    throw -1;
  }
    
  //0x:00:00 <0;4>
  if (rv[1] <= 4) {
    sv.push_back(rv[1]);
  } else {
    throw -1;
  }
    
  //00:x0:00 <0;5>
  if(rv[2] <= 5) {
    sv.push_back(rv[2]);
  } else {
    throw -1;
  }
    
  //00:0x:00 <0;9>
  sv.push_back(rv[3]);  
    
  //00:00:x0 <0;5>
  if(rv[4] <= 5) {
    sv.push_back(rv[4]);
  } else {
    throw -1;
  }
  
  //00:00:0x <0;9>
  sv.push_back(rv[5]);
 
   return sv;
}
