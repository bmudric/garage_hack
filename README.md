# Garage Door Opener

Solution for sending a signal via an HFY-FST transmitter module, controlled by an Arduino, to a HT12D decoder.

### Steps Taken
1. Detect remote frequency using gqrx
2. Record remote control signal using rtl_433 (example_original_signal.cu8)
 * Repending on your receiver and reception circumstances, getting clean signals may require a few attempts and some fiddling.
 * rtl_433 can auto-analyze signals so you have a better idea of what you are receiving.
3. Import original signal .cu8 as raw data to learn / verify your code.
4. Edit the example code in the sketch to match your required signal.
5. Run sketch on an Arduino, digitally writing to the HFY-FST data pin.
6. Record emulated signal.
7. Manually check signals in Audacity to confirm they are the same (or close enough).
8. Tweak code for timing as needed and repeat from step 4.
