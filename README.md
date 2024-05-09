# esp32_serial_debug_uart
Using Esp32 board to debug another boards with UART communication.

## How to use
1.  Programming a ESP32 board with this code.
2. Connect wire on RX2 in ESP32.
3. Connect another side of this wire on target board pin that send debug info as UART. 
4. Connect GND of Esp32 with GND of target board
5. Connect USB on Esp32 to power up.
6. Open Putty, set Connection Type to Serial.
7. Set Com Port of ESP32 device, eg. COM3
8. Set speed to 115200 
9. Connect!
10. The debug log should be show

![bf7213c7-9d12-42e0-9f1b-71d37a6b11b5](https://github.com/rpf16rj/esp32_serial_debug_uart/assets/21059398/820930ce-fa68-4d3e-a19c-bad544ddae70)

![12f63df6-f239-408e-84e1-ad99def41724](https://github.com/rpf16rj/esp32_serial_debug_uart/assets/21059398/c64d6d4d-6d26-4127-8a12-3483ca9063a6)

![image](https://github.com/rpf16rj/esp32_serial_debug_uart/assets/21059398/ae6e3dd7-4fc2-4591-99b9-c04760224f3a)
