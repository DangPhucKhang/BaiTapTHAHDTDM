from ._anvil_designer import Form1Template
from anvil import *

class Form1(Form1Template):
  def __init__(self, **properties):
    # Set Form properties and Data Bindings.
    self.init_components(**properties)
    # SẮP XẾP TĂNG DẦN
 
numbers = [3,45,2,46,5,25,65,8,57,67]
lenth = len(numbers)
 
# Lặp từ phần tử đầu đến kế cuối,
# Vì khi đến phần tử cuối là đã sắp xếp thànhcông
for i in range(0, lenth - 1):
    for j in range(i + 1, lenth):
        if (numbers[i] > numbers[j]):
            # Hoán đổi vị trí
            tmp = numbers[i]
            numbers[i] = numbers[j]
            numbers[j] = tmp
 
print(numbers)

    # Any code you write here will run before the form opens.
