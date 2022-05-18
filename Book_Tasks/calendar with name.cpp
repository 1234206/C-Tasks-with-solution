#include<string>
#include<iostream>
#include<boost/date_time.hpp>
const static std::string daysOfWeek[]{
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"

};
    int getofweekindex(int day,int month,int year){
    	boost::gregorian::date d(year,month,day);
    	return d.day_of_week();
	}
	
 int main(){
 	const int index = getofweekindex;
 	std::cout<<dayOfWeek[index]<<" "<<endl;
 }
