import serial 
#===========================================================================================
def send_data(port,baudrate,x):
    ser = serial.Serial(port ,baudrate)
    while True:
        data = f'{x}\n'
        ser.write(data.encode())
#===========================================================================================
def receive_data(port , baudrate):
    ser = serial.Serial(port , baudrate)
    data = 0
    while 1:
        if ser.in_waiting > 0 :
            data = ser.readline().decode('utf-8').strip()
            return data 
