---- FogOSv2 Birthday, Date, Time Help Guide ----
-- Running --
Run make, make qemu. 

-- Makefile --
Add 'birthday' and 'date' to UPROGS.
Build 'birthday' and 'date' with 'time' object.

-- Kernel Activity --
Clock is a necessary system call.

-- Birthday --
birthday | birthday with no flags. If the birthday is set, then it will tell the user "happy 
happy", otherwise it will tell the user not yet!
birthday '-s' [MM/DD] | birthday with -s flag will set the birthday. Must be in MM/DD format
where both are integers.

-- Date --
date | only command for date. This will return the date in format: MMM DD HH:MM:SS PDT YYYY
Note: MMM is a string. The rest are integers besides PDT.

-- Time --
time.c and time.h are required for date and time to work. Time is not a usable command.

-- Testing --
To test, try:
1. Calling 'birthday' before it is set.
2. Setting 'birthday' with parameters M/DD.
3. Setting 'birthday' with an impossible date.
4. Setting 'birthday' with today's date and calling it. 
5. Setting 'birthday' with your birthday and calling it. 
