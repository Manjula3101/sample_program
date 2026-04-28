# Initial values
a = 10
b = 0

max_retries = 3
attempt = 0

while attempt < max_retries:
    try:
        result = a / b
        print("Result =", result)
        break
    except ZeroDivisionError:
        attempt += 1
        print(f"Retrying... Attempt {attempt}")

        # Example recovery: change b after failure
        if attempt == max_retries:
            print("Operation failed after 3 attempts.")
        else:
            b = 2  # Change divisor so next attempt succeeds