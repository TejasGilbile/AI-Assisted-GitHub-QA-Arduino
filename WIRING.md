# Detailed Wiring Guide

## Circuit Diagram 
![Circuit Diagram](../circuit/simulation-circuit.png)

## Pin-by-Pin Connections

### LED 1 (Red)
| Component | Connection | Pin/Port |
|-----------|-----------|---------|
| LED Anode (long leg) | → | Resistor |
| Resistor (other end) | → | Arduino Pin 10 (digital) |
| LED Cathode (short leg) | → | GND (Ground) |

### LED 2 (Red)
| Component | Connection | Pin/Port |
|-----------|-----------|---------|
| LED Anode (long leg) | → | Resistor |
| Resistor (other end) | → | Arduino Pin 11 (digital) |
| LED Cathode (short leg) | → | GND (Ground) |

## Step-by-Step Wiring Instructions

### Step 1: Prepare Breadboard
1. Place breadboard on flat surface
2. Identify power rails (usually marked with red/black lines)
3. Identify signal rows (numbered columns)

### Step 2: Connect Ground (GND)
1. Connect Arduino GND pin → Breadboard GND rail (blue/black line)
2. This completes the return circuit for both LEDs

### Step 3: Insert LED 1
1. Pick first red LED
2. Insert anode (long leg) into breadboard row (e.g., row 10)
3. Insert cathode (short leg) into breadboard row (e.g., row 20)

### Step 4: Add Resistor for LED 1
1. Pick 220Ω resistor
2. Insert one end into same row as LED anode (row 10)
3. Insert other end into a different row (e.g., row 5)

### Step 5: Connect Pin 10 to Resistor
1. Connect Arduino Pin 10 → Breadboard row 5 (resistor end)
2. Now Pin 10 controls LED 1

### Step 6: Connect LED 1 Cathode to GND
1. Connect LED cathode (short leg row 20) → GND rail

### Step 7: Repeat for LED 2
- LED 2 anode → new 220Ω resistor → Arduino Pin 11
- LED 2 cathode → GND rail

### Step 8: Verify Connections
- [ ] Both resistors visible in circuit
- [ ] Both LEDs in correct orientation
- [ ] All GND connections made
- [ ] Pin 10 and Pin 11 connections secure

## Layout Reference

![Layout Reference](../circuit/simulation-circuit.png)

## Common Mistakes to Avoid

❌ **Mistake 1: Reversed LED Polarity**
- Wrong: Cathode to power, Anode to GND
- Correct: Anode to power (via resistor), Cathode to GND

❌ **Mistake 2: Missing Resistor**
- Wrong: LED directly to Arduino pin
- Correct: Always use current-limiting resistor
- Risk: Damages both LED and Arduino pin

❌ **Mistake 3: Wrong Pin Numbers**
- Verify code uses same pins as breadboard
- Code says Pin 10 → connect to Arduino Pin 10

❌ **Mistake 4: Loose Connections**
- Problem: Intermittent flickering
- Solution: Push all wires firmly into breadboard holes

❌ **Mistake 5: No Ground Connection**
- Wrong: Forgot to connect GND rail to Arduino GND
- Result: No complete circuit, LEDs won't light

## Verification Checklist

Before uploading code:

- [ ] Arduino connected to computer via USB
- [ ] Both LEDs visible on breadboard
- [ ] Both resistors in series with LEDs
- [ ] GND rail connected to Arduino GND pin
- [ ] Pin 10 connected to LED 1 resistor
- [ ] Pin 11 connected to LED 2 resistor
- [ ] All breadboard connections tight
- [ ] No loose wires touching
- [ ] USB cable not blocking any components

## Testing the Circuit

**After uploading code:**

1. Observe LED 1: Should blink ON/OFF
2. Observe LED 2: Should blink opposite of LED 1
3. Check timing: Each LED on for ~500ms
4. Both LEDs should never be on simultaneously

If only one LED works:
- Check corresponding resistor connection
- Verify pin number in code matches breadboard
- Ensure LED is inserted correctly

## Troubleshooting Flow Chart

LEDs not lighting?  
├─→ Check USB connection  
│  
├─→ Verify Pin 10 & Pin 11 connections  
│  
├─→ Check LED polarity (anode/cathode)  
│  
├─→ Test with known working LED  
│  
└─→ Check GND connection  

One LED works, other doesn't?  
│  
├─→ Verify resistor on non-working LED  
│  
├─→ Check pin connection in code  
│  
└─→ Test with different resistor  

---

**Happy Building!** 🔌⚡
