has_docker=1
command -v docker >/dev/null 2>&1 || {
  has_docker=0
}

#folder=cpp_babi_format_Oct-15-2018-0000029
folder=github_cpp_babi_format_Oct-15-2018-0000029
mode="${1:-cll}-"
#mode="cll-"
#mode="java-"
#mode="cpp-"
if [ "$mode" == "java-" ]; then
   folder=${folder/cpp/java}
fi

##################################################################################################
# STRATEGY 1: How many epochs to do the initial training on the 2-class classification problem?
INIT_N_EPOCH=150
#INIT_N_EPOCH=2 # for testing
##################################################################################################
# STRATEGY 2: How many epochs to do the incremental training on the larger classification problem?
# N_EPOCH=10
# N_EPOCH=20
N_EPOCH=$((INIT_N_EPOCH / 2))
##################################################################################################

rm -f transfer-learning.log
if [ "$has_docker" == "1" ]; then
   docker run --entrypoint sh -v $(pwd):/e -w /e busybox -c "rm -rf $folder/logs"
fi
rm -rf $folder/logs
n=2
function prepare_data() {
   x=$1
   mkdir -p $x/$folder/train $x/$folder/test
   mkdir -p $x/${folder/cpp/java}/train $x/${folder/cpp/java}/test
   mkdir -p $x/cll_${folder/cpp/java}/train $x/cll_${folder/cpp/java}/test
   cp $folder/maps.*.pkl $x/$folder
   cp ${folder/cpp/java}/maps.*.pkl $x/${folder/cpp/java}/
   cp cll_${folder/cpp/java}/maps.*.pkl $x/cll_${folder/cpp/java}/
   ################################################################################
   # STRATEGY 3: Prepare the datasets selectively. 
   ## Alternative 1: order the examples by their size, then starting from biggest
   for f in $(wc $folder/train/*.txt | sort -n | grep -v total | tail -$x | cut -f3 -d'/' | cut -f2 -d'_'); do
   ## Alternative 2: order the examples by their size, then starting from smallest
   #for f in $(wc $folder/train/*.txt | sort -n -r | grep -v total | tail -$x | cut -f3 -d'/' | cut -f2 -d'_'); do
   ## Alternative 3: order the examples by their name from 1 to n
   #for f in $(find $folder/train -type f -name "*.txt" | cut -f3 -d'/' | cut -f2 -d'_' | sort -n -r | tail -$x ); do
   ################################################################################
       cp $folder/train/train_$f $x/$folder/train/train_$f
       cp $folder/test/test_$f $x/$folder/test/test_$f
       cp ${folder/cpp/java}/train/train_$f $x/${folder/cpp/java}/train/train_$f
       cp ${folder/cpp/java}/test/test_$f $x/${folder/cpp/java}/test/test_$f
       cp cll_${folder/cpp/java}/train/train_$f $x/cll_${folder/cpp/java}/train/train_$f
       cp cll_${folder/cpp/java}/test/test_$f $x/cll_${folder/cpp/java}/test/test_$f
   done
   chmod -R o+w $x
}
################################################################################
#
# Strategy 4: transfer the best performing model of n-class as the initial model for the n1-class classification.
# The dataset of n1 class already contains the dataset of n class, plus one extra class.
#     Alternative 1: where n1 = 2 * n, -- might be greedy but will finish sooner
#     Alternative 2: where n1 = n + 1, -- step-by-step build up from previous classes
#
################################################################################
function transfer() {
        n=$1
        n1=$2
	# n1=$((n+1))
        m=$(grep Test $n/$folder/"$mode"log-$n.txt | cat -n | sort -n -k6 -r | tail -1 | cut -f1)
        m1=$((m-1))
        p=$(grep Test $n/$folder/"$mode"log-$n.txt | cat -n | sort -n -k6 -r | tail -1 | cut -f2 -d",")
        percent=$(grep Test $n/$folder/"$mode"log-$n.txt | cat -n | sort -n -k6 -r | tail -1 | cut -f2 -d"," | cut -d"(" -f2 | cut -d"%" -f1)
        echo ============= $percent
        if [ "$percent" -eq "50" ]; then
           if [ "$mode" == "cll-" ]; then
	      cp $n/$folder/"$mode"$n.cpkl.$m1 $n/$folder/"$mode"$n.cpkl
           else
	      cp $n/$folder/$n.cpkl.$m1 $n/$folder/$n.cpkl
           fi
           N_EPOCH=$((INIT_N_EPOCH / n))
	   #N_EPOCH=10
           mode=$mode train.sh $n/$folder $n $N_EPOCH
           echo ============= $percent
           return
        fi
        old_percent=0
        if [ -f "$mode"$n.percent ]; then
          old_percent=$(grep -v ==== "$mode"$n.percent | tail -1)
        fi
        if [ "$percent" -ge "$old_percent" ]; then
          if [ "$mode" == "cll-" ]; then
		  cp $n/$folder/"$mode"$n.cpkl.$m1 "$mode"$n.cpkl
          else
		  cp $n/$folder/$n.cpkl.$m1 "$mode"$n.cpkl
          fi
	  echo ====== $m1 >> "$mode"$n.percent
	  echo $percent >> "$mode"$n.percent
        fi
        echo ===== transfer $n @ $m1 $p to $n1
        prepare_data $n1
	rm -f $n1/$folder/"$mode"$n1.cpkl*
        rm -f $n1/$folder/"$mode"log-$n1.txt
        if [ "$mode" == "cll-" ]; then
		cp $n/$folder/"$mode"$n.cpkl.$m1 $n1/$folder/"$mode"$n1.cpkl
		cp $n/$folder/"$mode"$n.cpkl.$m1 $n1/$folder/"$mode"$n1.cpkl.0
		chmod o+w $n1/$folder/"$mode"$n1.cpkl
        else
		cp $n/$folder/$n.cpkl.$m1 $n1/$folder/$n1.cpkl
		cp $n/$folder/$n.cpkl.$m1 $n1/$folder/$n1.cpkl.0
		chmod o+w $n1/$folder/$n1.cpkl
        fi
        N_EPOCH=$((INIT_N_EPOCH / n1))
	#N_EPOCH=10
        mode=$mode train.sh $n1/$folder $n1 $N_EPOCH
}
prepare_data 2
if [ "$has_docker" == "1" ]; then
   docker run --entrypoint sh -v $(pwd):/e -w /e busybox -c "rm -rf 2/$folder/"$mode"2.cpkl*"
fi
rm -f 2/$folder/"$mode"2.cpkl*
rm -f 2/$folder/"$mode"log-2.txt
### Recording the epoch of best performing model
if [ ! -f "$mode"2.percent ]; then
	mode=$mode train.sh 2/$folder 2 $INIT_N_EPOCH
        echo 2/$folder/"$mode"log-2.txt
	m=$(grep Test 2/$folder/"$mode"log-2.txt | cat -n | sort -n -k6 -r | tail -1 | cut -f1)
	m1=$((m-1))
	p=$(grep Test $n/$folder/"$mode"log-$n.txt | cat -n | sort -n -k6 -r | tail -1 | cut -f2 -d",")
	percent=$(grep Test $n/$folder/"$mode"log-$n.txt | cat -n | sort -n -k6 -r | tail -1 | cut -f2 -d"," | cut -d"(" -f2 | cut -d"%" -f1)
	echo ============= $percent
        if [ "$mode" == "cll-" ]; then
		  cp 2/$folder/"$mode"2.cpkl.$m1 "$mode"2.cpkl
		  cp 2/$folder/"$mode"2.cpkl.$m1 "$mode"2.cpkl.$m1
        else
		  cp 2/$folder/2.cpkl.$m1 "$mode"2.cpkl
		  cp 2/$folder/2.cpkl.$m1 "$mode"2.cpkl.$m1
        fi
	echo ====== $m1 >> "$mode"2.percent
	echo $percent >> "$mode"2.percent
else
        m1=$(grep === "$mode"2.percent | tail -1 | cut -f2 -d" ")
	if [ -f "$mode"2.cpkl.$m1 ]; then 
	  if [ "$mode" == "cll-" ]; then
	  	cp "$mode"2.cpkl.$m1 2/$folder/"$mode"2.cpkl
		cp "$mode"2.cpkl.$m1 2/$folder/"$mode"2.cpkl.0
	  	chmod o+w 2/$folder/"$mode"2.cpkl
          else
	  	cp "$mode"2.cpkl.$m1 2/$folder/2.cpkl
		cp "$mode"2.cpkl.$m1 2/$folder/2.cpkl.0
	  	chmod o+w 2/$folder/2.cpkl
          fi
          N_EPOCH=$((INIT_N_EPOCH/2))
	  #N_EPOCH=10
          echo $N_EPOCH
	  mode=$mode train.sh 2/$folder 2 $N_EPOCH
	fi
fi
n=2
if [ "$mode" == "cpp-" ]; then
        extra="80 104"
else
	extra=
fi
for n in 2 4 6 8 10 12 14 16 20 25 30 50 $extra; do
#for n in 4 6 8 10 12 14 16 20 25 30; do
# change to the following line for testing 
#for n in 2; do
  #n=$((n*2))
  #n=$((n+1))
  for n1 in 4 6 8 10 12 14 16 20 25 30 50 $extra; do
    if [ "$n" -lt "$n1" ]; then
      transfer $n $n1 | tee -a transfer-learning.log
      break
    fi
  done
done 
