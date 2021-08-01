string dayOfProgrammer(int year) {
if(year==1918)
    {
        return "26.09.1918";
    }
    else if((year<1918 && year%4==0) ||(year>1918  &&((year%4==0 && year%100!=0) ||year%400==0))) 
    {
        return "12.09." + to_string(year);
    }
    else
    {
        return "13.09." + to_string(year);
    }
}
/*
This program seems to be complicated but it is not,
actually it has to check first the year belongs to 1918 if "Yes" then it should return 26.09.1918
if not, then it has to go for both Julian Calender and Gregorian Calender and checks whether it is a leap year in both calenders and print 12.09.(to the year given)
// Since it is the calender related sum , it will always be 12.09.year if it is leap year
or else if it doen't satisfies the above two conditions then obviously it is not a leap year and also the year doesn't belong to 1918 , so it has to defenitely
print 13.09.year
*/
