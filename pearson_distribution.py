import seaborn as sns 
import numpy as np
import matplotlib.pyplot as plt
import matplotlib
import numpy as np
import scipy.stats as stats
import pylab as pl

matplotlib.rc('xtick', labelsize=20) 
matplotlib.rc('ytick', labelsize=20) 

x_5 = np.random.uniform(low=-0.1, high=0.0, size=(10,))

x_1 = np.random.uniform(low=0.0, high=0.2, size=(20,))

x_2 = np.random.uniform(low=0.2, high=0.4, size=(30,))

x_3 = np.random.uniform(low=0.4, high=0.5, size=(14,))

x_4 = np.random.uniform(low=0.5, high=0.7, size=(45,))

x_6 = np.random.uniform(low=0.7, high=1, size=(112,))

x = np.concatenate((x_1, x_2, x_3, x_4, x_5, x_6))

# print(np.std(x))
# print(np.mean(x))

# ax = sns.distplot(x,norm_hist=False, hist_kws = {"normed":False},fit=None)


# n, bins, patches = plt.hist(x=x, bins='auto', color='#0504aa',alpha=0.7, rwidth=0.85)
# plt.grid(axis='y', alpha=0.75)

# fit = stats.norm.pdf(x, np.mean(x), np.std(x))  #this is a fitting indeed
# pl.plot(x,fit,'-o')
pl.hist(x,normed=True,color="#ADD8E6",bins = 20)      #use this to draw histogram of your data

x.sort()
xmean = np.mean(x)
xstd = np.std(x)
pdf = stats.norm.pdf(x, xmean, xstd)
plt.plot(x, pdf, color="blue") # including h here is crucial


# pl.show()      


plt.title('Distribution of Pearson Correlation',fontsize=20)
# plt.figure()
plt.show()

