// Knowing which digit to process with either odd or even number
Odd#
1 1 1 1 Even length
^   ^

1 1 1 1 1 Odd length
  ^   ^   
Even#

Processing each entry as we go

restating: 

+Double each correct digit as we go(iterate through and Σinput)
Wether its of Odd or Even length since the requirement is to double every other 
digits.

+Double every other digit for two cases, even or odd, as the program sort things out.

Processing each entry as we go[Notice its not there to help guide my gameplan ]
is only stating the constraint. Also when followed blindly it sounds like doing singular 
digits at a time, aimlessly. That is also a strategy but a horrible and messy one.
The aim is to double the correct digits. There must something that can help us
develop this game-plan. First, think about what we have for sure that is 
enduring that is permanently attached to our micro-objects or the macro-objects. The fact that 
input number either gonna be of Odd or Even length is vital info. 

Now we attempt to solve:
Since I need to Double every other digit for two cases, even or odd. 
Can I go forward with incrementations? Do I need complex functions? Complex 
functions need not apply. The constraint is to process as we go. So gameplan is 
do someThing within loops.
