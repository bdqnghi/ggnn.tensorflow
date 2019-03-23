has_docker=1
command -v docker >/dev/null 2>&1 || {
  has_docker=0
}
if [ "$has_docker" == "1" ]; then
   docker build -t progress ../progress
fi
NVIDIA=
if [ "$has_docker" == "1" ]; then
  NVIDIA="nvidia-docker run -v $(dirname $(pwd)):/e -w /e --shm-size 11G --rm -it progress"
fi

function size_voc() {
	p=$(pwd)
	cd $1 > /dev/null
        lang=$(ls maps.*.pkl)
        lang=${lang/maps./}
        lang=${lang/.pkl/}
	if [ "$has_docker" == "1" ]; then
	   k=$(docker run -v $(pwd):/e --entrypoint /opt/bin/maps -it yijun/fast:built --lang $lang | sort -n | tail -1 | cut -f1 -d"<")
        else
	   k=$(python $p/ggnn/maps.py --lang $lang | sort -n | wc -l)
	fi
	cd - > /dev/null
	echo $k
}

function mll_train() {
lang1=$1
lang2=$(dirname $lang1)/$(basename $lang1)
lang2=${lang2/cpp/java}
if [ "$lang1" == "$lang2" ]; then
   lang=java
else
   lang=cpp
fi
n=$2
n_iter=${3:-200}
k=$(size_voc $lang2)
cd .. > /dev/null
log=program_data/$lang1/$lang-log-$n.txt
if [ -f program_data/$lang1/$lang-$n.cpkl ]; then
   return
fi
mkdir -p program_data/$(basename ${lang1/java/cpp})/logs/$lang/$n
chmod o+w program_data/$(basename ${lang1/java/cpp})/logs/$lang/$n
if [ ! -f $log ]; then
 mkdir -p $(dirname $log)
 touch -f $log
fi
NV_GPU=1 \
  /usr/bin/time -f %e \
  $NVIDIA \
  python main_ggnn.py \
	--cuda \
	--training \
	--n_classes $n \
        --directory  program_data/$lang1 \
	--model_path program_data/$lang1/$n.cpkl \
	--log_path program_data/$(basename ${lang1/java/cpp})/logs/$lang/$n \
        --state_dim 5 \
	--n_steps 5 \
	--n_hidden 50 \
	--niter $n_iter \
	--size_vocabulary $k \
	--train_batch_size 128 \
	--test_batch_size 128 \
  | tee -a $log
cat $log
cd - > /dev/null
}

function cll_train() {
lang1=$1
lang2=$(dirname $lang1)/cll_$(basename $lang1)
lang2=${lang2/cpp/java}
k=$(size_voc $lang2)
n=$2
log=program_data/$lang1/cll-log-$n.txt
n_iter=${3:-200}
if [ -f program_data/$lang1/cll-$n.cpkl ]; then
   return
fi
mkdir -p program_data/$(basename $lang1)/logs/biggnn/$n
chmod o+w program_data/$(basename $lang1)/logs/biggnn/$n
if [ ! -f $log ]; then
 mkdir -p $(dirname $log)
 touch -f $log
fi
NV_GPU=1 \
  /usr/bin/time -f %e \
  $NVIDIA \
  python main_biggnn.py \
	--cuda \
	--training \
	--n_classes $n \
        --left_directory  program_data/$lang1 \
        --right_directory program_data/$lang2 \
	--model_path program_data/$lang1/cll-$n.cpkl \
	--log_path program_data/$(basename $lang1)/logs/biggnn/$n \
        --state_dim 5 \
	--n_steps 5 \
	--n_hidden 50 \
	--niter $n_iter \
	--size_vocabulary $k \
	--train_batch_size 256 \
	--test_batch_size 256 \
  | tee -a $log
}

function train() {
   n=$1
   folder=$2
   mll_train $folder $n
   cll_train $folder $n
   folder=${folder/cpp/java}
   mll_train $folder $n
}

ver=Oct-10-2018-0000028
ver=Oct-15-2018-0000029
if [ "$1" == "" ]; then
	for n in 104 50 25 10; do
	   train $n cpp_babi_format_$ver $3 | tee -a status.log
	done
	for n in 50 30 10; do
	   train $n github_cpp_babi_format_$ver $3 | tee -a status.log
	done
elif [ "$1" == "java" ]; then
	mll_train java_babi_format_$ver $2 $3 | tee -a status.log
elif [ "$1" == "cpp" ]; then
	mll_train cpp_babi_format_$ver $2 $3 | tee -a status.log
elif [ "$1" == "biggnn" ]; then
	cll_train cpp_babi_format_$ver $2 $3 | tee -a status.log
elif [ "$1" == "github_java" ]; then
	mll_train github_java_babi_format_$ver $2 $3 | tee -a status.log
elif [ "$1" == "github_cpp" ]; then
	mll_train github_cpp_babi_format_$ver $2 $3 | tee -a status.log
elif [ "$1" == "github_biggnn" ]; then
	cll_train github_cpp_babi_format_$ver $2 $3 | tee -a status.log
else
     if [ "$mode" == "cll-" ]; then
	cll_train $1 $2 $3 | tee -a status.log
     else
	mll_train $1 $2 $3 | tee -a status.log
     fi
fi
