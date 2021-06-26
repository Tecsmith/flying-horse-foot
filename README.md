# The Flying Horse Foot

This body of work is my attempt to build a clone of "The Pegasus Hoof" keyboard controller.

This came about because some time ago I'd bought a Filco MJ2 TLK mechanical keyboard with the intent to use it as a basis of a custom build Mechanical Board ... alas, other things had priority and 7 years later I found that I could no longer buy the hacker controller - "The Pegasus Hoof" - by Fredrik Atmer of ["Bathroom Epiphanies Inc."](http://bathroomepiphanies.com/controllers/)


## Hardware / Part List

| Qty | Description                 | Size      | Mnf. Part No.         | Mouser PN            | Element14 PN | Spec. |
|-----|-----------------------------|-----------|-----------------------|----------------------|--------------|-------|
|  1  | ATmega32u2 micro controller | TQFP32    | ATMEGA32U2-AU         | 556-ATMEGA32U2-AU    | 1748524      | [🗏](DataSheets/01__ATmega32u2.pdf) |
|  2  | 4-10 Decoder Logic IC       | SOIC      | SN74HC42DR            | 595-SN74HC42DR       | 3119918      | [🗏](DataSheets/02__74HC42.pdf) |
|  1  | 16MHz crystal oscillator    | 3.2x2.5mm | CX3225SB16000E0EGFCC  | 581-CX3225SB16000EGF | *-- na --*   | [🗏](DataSheets/03a_SB16000E0.pdf) |
|     |   " *(alt)*                 |           | ABM8G-16.000MHZ-4Y-T3 | *-- na --*           | 2467842      | [🗏](DataSheets/03b_ABM8G_16MHZ.pdf) |
|  1  | 10µF electrolytic capacitor | 4.3x5.5mm | EEE-1CA100SR          | 667-EEE-1CA100SR     | 9696920      | [🗏](DataSheets/04__1CA100SR.pdf) |
|  1  | Magnetic "Reed" switch      |           | MK06-5-B              | 876-MK6-5-B          | 1079479      | [🗏](DataSheets/05__MK06_V02.pdf) |
|  2  | 18pF ceramic capacitors     | 0603      | C1608C0G1H180J080AA   | 810-C1608C0G1H180J   | 1907287      | |
|  3  | 100nF ceramic capacitors    | 0603      | C1608X7R1E104K080AA   | 810-C1608X7R1E104K   | 2332586      | |
|  2  | 1µF ceramic capacitors      | 0603      | C1608X7R1C105K080AC   | 810-C1608X7R1C105K   | 1907343      | |
|  2  | 22Ω resistors               | 0603      | ERJ-3GEYJ220V         | 667-ERJ-3GEYJ220V    | 2059557      | |
|  4  | 10kΩ resistors              | 0603      | ERJ-3GEYJ103V         | 667-ERJ-3GEYJ103V    | 2059627      | |
|  3  | 510Ω resistors              | 0603      | ERJ-3GEYJ511V         | 667-ERJ-3GEYJ511V    | 2059593      | |
|  2  | 18-pin headers, 2mm pitch   | 2mm pitch | M22-2011205           | 855-M22-2011805      | 3395122      | |
