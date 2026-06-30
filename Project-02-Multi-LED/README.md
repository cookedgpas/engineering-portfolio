# Project 2: Multi-LED Parallel Architecture and Sequential Timing Logic

### 1. Project Objective
The goal of this project is to build a parallel circuit that independently controls 3 colored LEDs (Red, Green, Blue) to execute a precise, sequential blinking routine upon startup:
* **Red LED:** Blinks exactly 5 times.
* **Green LED:** Blinks exactly 10 times.
* **Blue LED:** Blinks exactly 15 times.

---

### 2. Hardware Prototyping & Visual Layout
Below is the physically constructed 3-channel parallel circuit. Each LED is given its own independent $330\Omega$ resistor to prevent overheating issues and keep current flowing safely to a shared grounding bus.

<img src="./moreleds2.jfif" width="500" alt="Multi-LED Parallel Physical Hardware Setup" />

---

### 3. Core Physics: Why Each LED Needs Its Own Resistor
I intentionally avoided using a single shared resistor for all the LEDs due to two main reasons:
1) Multiple parallel branches ensure that each LED can independently be programmed to blink as required, something a series connection would not allow since a series connection enforces a single shared current path.
2) If these parallel branches shared a single resistor instead of having their own, the LED with the lowest forward voltage drop (Red) would clamp the voltage down, stealing the current and causing the other colors to remain completely dim or unlit.

---

### 4. Circuit Mapping & Ground Plane
* **Common Ground Bus:** The cathodes (short legs) of all 3 LEDs plug directly into the continuous negative power rail on the side of the breadboard. A single jumper wire routes this entire rail back to the Arduino’s $\text{GND}$ pin to complete the loops.
* **Independent Control & Resistors:** The required $330\Omega$ resistors connect the anodes (long legs) of each LED separately to Pins 12, 11, and 10. This ensures that every individual color loop has its own dedicated resistance to prevent overheating while allowing completely independent pin signaling.

---

### 5. Sequential Firmware Logic
To ensure that the sequence (5, 10, 15 blinks) runs exactly once when the Arduino boots up and doesn't loop endlessly, the entire brute-force blinking routine was written directly inside the `setup()` block. Because `setup()` only fires once per power cycle, the program finishes the full count and then idles cleanly until the physical reset button is tapped.

As I remain a beginner to Arduino coding, I have manually programmed each blink cycle in a "brute-force" method to better appreciate loop logics in the language once i understand it sufficiently enough to utilise it here, I aim to enhance this code eventually to integrate these newly obtained skills and shorten the code eventually.
