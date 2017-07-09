# Get Variables
import numpy
from matplotlib import pyplot
count=0 
extracted_tot = 0 
j=0 
print('Enter total mass of solute: ') 
a0 = input()
print('Enter volume organic solvent (mL): ') 
v1 = input()
print('Enter volume water (mL): ') 
v2 = input()
print('Enter K: ') 
k  =  input()


print('Enter purity of product (0-0.9999999)\n **Note do not enter 1**\n ') 
purity = input()
epsilon = 1-float(purity)


a0_0 = a0  #static a0

if epsilon > 0
while (abs(1-j) >= epsilon): # 99.9% extraction
    count = count +1 
    extracted_i = (a0*k*v1)/(k*v1+v2) 
    b(count)=extracted_i 
    extracted_tot = (extracted_tot + extracted_i) 
    j = extracted_tot / a0_0 
    a0 = a0-extracted_i 
end 
%%
fprintf('It would take %1.0f time(s) to reach the purity requested\n',count)
exit=print('Enter 1 to plot or enter any key to exit: ') 

if exit == 1
    plot(b)
end
else 
    fprintf('***ERROR INVALID ENTRY FOR PURITY***\n***Exiting***\n')
end
'''