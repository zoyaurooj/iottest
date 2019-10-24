int count = 0;                                          // count = 0
char input[12];                                        // character array of size 12 
char tag[]="510093E01F3D";
int buzzer=10;

boolean flag = 0;                                       // flag =0
void setup()
{
   Serial.begin(9600);                                  // begin serial port with baud rate 9600bps
}
void loop()
{
   if(Serial.available())
   {  
      count = 0;
      flag=0;
      while(Serial.available() && count < 12)          // Read 12 characters and store them in input array
      {
         input[count] = Serial.read();
         count++;
         delay(5);
      }
      Serial.print(input);                             // Print RFID tag number 
      
      if(count==12)
      {
           for(int i=0;i<12;i++)
             {   if(input[i]!=tag[i])
                    {
                      flag=1;
                      break;
                    }
             }  
      }
       if (flag==0){
            Serial.println(" NO Error"); 
            digitalWrite(buzzer,LOW); 
       }    
      else{
            Serial.println(" Error"); 
            digitalWrite(buzzer,HIGH);
      }     
     }
  }
