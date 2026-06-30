# Project 1: Introduction to Arduino, Semiconductor Physics Principles, and Single LED Circuit Analysis

### 1. Hardware Prototyping & Visual Layout
Below is the verified, physically deployed hardware layout for the single-channel solid-state circuit.

*(Note: Upload your single LED circuit photo into this folder next, and embed it right here!)*

---

### 2. Solid-State Physics & The Diode Dilemma
A semiconductor diode (LED) cannot inherently regulate the amount of current passing through it once it is forward biased. 
* When a voltage exceeding the forward voltage threshold ($V_f$) is applied, the internal PN-junction energy barrier drops.
* Consequently, current increases **exponentially**. 
* In the absence of a series current-limiting resistor, the LED will attempt to draw an infinite amount of current from the source until thermal limits are breached and the silicon crystal melts.

---

### 3. Linear Circuit Analysis & Mathematical Design
To safely run a standard red LED from a 5V digital I/O pin, Ohm's Law ($V = IR$) was applied to calculate the ideal resistance for a target safe current range of $10\text{-}20\text{mA}$ ($0.01\text{A}$ to $0.02\text{A}$).

* **Given Parameters:**
  * $V_{\text{provided}} = 5\text{V}$
  * $V_{\text{required (LED drop)}} \approx 2\text{V}$
  * $V_{\text{resistor}} = 5\text{V} - 2\text{V} = 3\text{V}$

* **Theoretical Target Resistance:**
  $$R = \frac{3\text{V}}{0.01\text{A}} = 300\Omega \quad \text{or} \quad R = \frac{3\text{V}}{0.02\text{A}} = 150\Omega$$

* **Physical Implementation:**
  Using a standard, readily available $330\Omega$ manufacturer resistor from the kit, the exact loop current was derived:
  $$I = \frac{3\text{V}}{330\Omega} \approx 0.009\text{A} \quad (9\text{mA})$$
  This keeps the LED bright, stable, and perfectly safe from overheating.
