def liters_100km_to_miles_gallon(liters):
    if liters >= 0:
        miles = ((100/liters)/1.609344) * 3.785411784
        return miles
    else:
        return None
def miles_gallon_to_liters_100km(miles):
    liters = (100 * 3.785411784) / (miles * 1.609344)
    return liters

print(liters_100km_to_miles_gallon(3.9))
print(liters_100km_to_miles_gallon(7.5))
print(liters_100km_to_miles_gallon(10.))
print(miles_gallon_to_liters_100km(60.3))
print(miles_gallon_to_liters_100km(31.4))
print(miles_gallon_to_liters_100km(23.5))

