def calculate_performance(y_actual, y_hat):
    TP = 0
    FP = 0
    TN = 0
    FN = 0

    for i in range(len(y_hat)): 
        if y_hat[i] == y_actual[i] ==1:
            TP += 1
        if y_hat[i] == 1 and y_actual[i] == 0:
            FP += 1
        if y_hat[i] == y_actual[i] == 0:
            TN += 1
        if y_hat[i] == 0 and y_actual[i] == 1:
            FN += 1

    return (TP, FP, TN, FN)
