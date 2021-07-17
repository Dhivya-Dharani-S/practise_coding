string timeConversion(string s) 
{
  string  hour_string=s.substr(0,2);
  int hour=stoi(hour_string);
  size_t pos=s.find("PM");
  if(pos!=string::npos)
    {
      if(hour+12 < 24){hour_string=to_string(hour+12);}
    }
      else
      { 
        if(hour==12){hour_string = "00";}
      }
      return s.replace(0,2,hour_string).erase(s.size()-2);
}
/* Time Conversion (12 hr to 24 hr format)
Sample Input 
07:05:45PM
Sample Output 
19:05:45

if it is a pm then we have to add 12 to the hour string , then remove pm also... if it is an am we just simply remove am and s=display the time 
Here we simply , get the hour from the string and convert into integer and perform the calculation and after it is completed , again convert it into string and display the output*/ 
