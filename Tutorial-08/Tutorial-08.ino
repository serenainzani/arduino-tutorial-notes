/* Pulse with Modulation (PWM)
analogWrite() command works with pulse with modulation (pwm)

Values for analogWrite() voltage param are 0-255, and 255 because 2^8 bit number

Osilliscope - shows a picture of a voltage from electical machines, e.g. microprocessors like the arduino
- behaves as expected for 0 and 255v for the voltage param 
  (straight line either on the x axis e. _____ or above the x-axis a the correct amount e.g. -----)
- If set to 127 - line breaks up equally betwwen the 0 and upper x-axis e.g. looks like this on the screen -_-_-
  - stays at 255 volts for 2ms, then 0v for 2ms. Half way voltage b/w 0 & 255 === equal amounts of modulation between the 255 and 0v
- If set low, like 50 -> looks like ___-___-____, so less modulation at the top axis. So less time on 255v during the same 4ms -> looks dimmer
- If set high, like 210 -> looks like ----_-----_-----, so more modulation at the top axis. So more time on 255v during the same 4ms -> loo

PWM has a constant period, but it changes what % of the time that the signal is on or off
- more time on -> brighter
- more time off -> dimmer
So an AVERAGE of the desired voltage is created with analogWrite(), making it look like its constantly at the desired voltage

What if you want real analog voltage - use a capacitor, which smooths out the voltage
Capicitors most often have a polarity. Goes from the power wire column to the ground wire colum (to meaure the voltage across the whole curcuit)
Creates a wavey line on the Osilliscope rather than a straight line, as cannot completely smooth out the voltage.

Summary
PWM works by really quickly blinking a LED on/off, which makes it look dimmer/brigher to our eyes when the voltage is not set to the extremes 0 or 255.
*/