using System;

namespace 백준
{
    internal class Program
    { 
        static void Main()
        {
            int hour, min, make_min;
            

            string[] time = Console.ReadLine().Split(' ');
            make_min = int.Parse(Console.ReadLine());

            hour = int.Parse(time[0]);
            min = int.Parse(time[1]);

            min += make_min;

            while(min >= 60)
            {
                hour++;
                min -= 60;
            }
            
            if(hour >= 24) hour -= 24;

            Console.WriteLine(hour + " " + min);            
        }
    }
}