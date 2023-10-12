# CySafe
HackDavis Winner of Best Hack for Local Good

# **HackDavis Winner of Best Hack for Local Good**

## **Inspiration**

Being in a town where biking is so prevalent along with bike accidents made us wonder what the primary reasons for those crashes were. The main pain points were lighting, lack of awareness of surrounds, and delayed assistance.

## **What it does**

We have 4 main features:

**Blinkers:** The blinker lights are on either side of the handlebars and turn on with a button next to them. To turn them off, simply re-press the button.

**Brake Lights:** As for the brake light, the button is located on the right brake handle so that when you brake, you're also pressing the button. Holding down the button turns on the back brake light while releasing it turns the light off.

**Car Tracking System:** The car tracking system utilizes a camera that is secured to your helmet to track cars coming from behind you. Once a car is detected, a light in your peripheral will be lit to let you know.

**Crash Detection System:** The crash detection system uses a piezo vibration sensor to detect if you have crashed through a large force/vibration. If a crash is detected, a text will be sent to emergency services saying "Bike crash detected. Emergency services in need."

## **How we built it**

The blinker and brake lights were built using an Arduino Uno. The components were LEDs and resistors. The crash detection system was built using both an Arduino Uno and Raspberry Pi. The Arduino Uno is connected to a piezo vibration sensor which detects if a large vibration/force breaches a certain benchmark. If it does, the Arduino will communicate with the Raspberry Pi to send a text out to emergency services with our custom message. The webcam detector is programmed with Tensorflow and OpenCV installed onto a Raspberry Pi 4. This allowed us to program a user interface that would be able to identify what is in the image in real-time. We then took this information and powered ON the LED light whenever it detected a reasonably close car/vehicle near the biker. A 3D model of an example enclosure and mount was made using SolidWorks to show how the Arduino, for example, was to be mounted onto the bike frame. However, due to the long printing time and our lack of time, we were unable to print it out. So as a substitute, we prototyped the enclosures using cardboard.

## **Challenges we ran into**

We ran into a challenge for each feature as we were building the four core features. When building the car detection system, we did not expect how long it took to download all the needed libraries, which took almost 4 hours downloading onto a Raspberry Pi alone. When building the collision detection, we tried using an accelerometer. However, the component was unable to connect with Raspberry Pi, and the Arduino was unable to connect to the internet. Hence our final solution, which uses a piezo vibration sensor that connects the Raspberry Pi with the Arduino.

## **Accomplishments that we're proud of**

We're proud of being able to incorporate a good amount of hardware and software together. We also enjoyed using both the Arduino and Raspberry Pi together.

## **What we learned**

We learned that some simple tasks may take longer than expected, and some difficult tasks may just miraculously work.

## **What's next for CySafe**

Our next steps are to engineer better hardware so it would function as a clip-on mount onto both the helmet and the bicycle. The device would be weatherproof and lightweight. We also plan on adding a GPS feature for lost or stolen bicycles. Lastly, the camera system would be able to utilize image tracking to its full potential to only light up the LED within a tighter threshold.

**Devpost Link:** [CySafe on Devpost](https://devpost.com/software/cysafe)


