Sure! Here's a **problematic question** in **basic electronics**, designed to test understanding of **Ohm’s Law, resistors in series/parallel, and power calculations** — commonly challenging topics for beginners.

---

### 🔧 **Problematic Question:**

A circuit consists of a **12 V battery** connected to three resistors:

* **R₁ = 4 Ω**,
* **R₂ = 6 Ω**, and
* **R₃ = 12 Ω**.

Resistors **R₂ and R₃ are connected in parallel**, and their combination is connected in **series with R₁**.

#### **Tasks:**

1. Draw the equivalent circuit.
2. Calculate the **total resistance** of the circuit.
3. Find the **total current** drawn from the battery.
4. Determine the **voltage drop across each resistor**.
5. Calculate the **power dissipated** by each resistor.

---

### ✅ **Solution:**

#### **Step 1: Redraw the Circuit**

* R₂ and R₃ in parallel:

  ```
       R2
    +----/\/\----+
    |            |
   ( )          ( )  Battery = 12V
    |            |
    +----/\/\----+
       R3
         |
         |
        R1 (Series)
         |
        GND
  ```

---

#### **Step 2: Calculate Equivalent Resistance**

First, find the parallel resistance of R₂ and R₃:

$$
\frac{1}{R_{23}} = \frac{1}{R_2} + \frac{1}{R_3} = \frac{1}{6} + \frac{1}{12} = \frac{2 + 1}{12} = \frac{3}{12} = \frac{1}{4}
$$

$$
R_{23} = 4 \, \Omega
$$

Now add R₁ in series:

$$
R_{\text{total}} = R_1 + R_{23} = 4\,\Omega + 4\,\Omega = 8\,\Omega
$$

---

#### **Step 3: Find Total Current from Battery**

Using **Ohm’s Law**:

$$
I = \frac{V}{R} = \frac{12\,V}{8\,\Omega} = 1.5\,A
$$

---

#### **Step 4: Voltage Drop Across Each Resistor**

* **R₁ is in series**, so:

  $$
  V_{R1} = I \times R_1 = 1.5\,A \times 4\,\Omega = 6\,V
  $$

* Voltage across **R₂ and R₃** (they share the remaining voltage from the battery):

  $$
  V_{R2} = V_{R3} = 12\,V - V_{R1} = 6\,V
  $$

Now calculate **individual currents** through R₂ and R₃:

* $I_{R2} = \frac{V}{R_2} = \frac{6}{6} = 1\,A$
* $I_{R3} = \frac{V}{R_3} = \frac{6}{12} = 0.5\,A$

Total current confirms:

$$
I_{\text{total}} = I_{R2} + I_{R3} = 1 + 0.5 = 1.5\,A \quad \checkmark
$$

---

#### **Step 5: Power Dissipated by Each Resistor**

Use $P = I^2 \times R$:

* $P_{R1} = (1.5)^2 \times 4 = 2.25 \times 4 = 9\,W$
* $P_{R2} = (1)^2 \times 6 = 6\,W$
* $P_{R3} = (0.5)^2 \times 12 = 0.25 \times 12 = 3\,W$

---

### ✅ **Final Answers:**

| Quantity                    | Value |
| --------------------------- | ----- |
| Total Resistance            | 8 Ω   |
| Total Current               | 1.5 A |
| Voltage drop across R₁      | 6 V   |
| Voltage drop across R₂ & R₃ | 6 V   |
| Power (R₁)                  | 9 W   |
| Power (R₂)                  | 6 W   |
| Power (R₃)                  | 3 W   |

---

Would you like this formatted as a printable worksheet or quiz-style document?
