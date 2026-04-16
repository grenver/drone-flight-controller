# Drone Flight Controller

A custom drone flight controller built from scratch on an STM32F446RE.

## Architecture
- Custom preemptive scheduler written in ARM assembly
- IMU sensor fusion (MPU-6050)
- PID control loops for roll, pitch, yaw

## Current Status
- [x] Bare metal LED blink - direct register access
- [ ] Preemptive scheduler
- [ ] IMU driver
- [ ] Sensor fusion
- [ ] PID controllers
- [ ] Full flight

## Hardware
- STM32F446RE Nucleo-64
- GY-521 MPU-6050 IMU
