function fast() {
	docker run --rm -v $(pwd):/e -w /e -it yijun/fast:built "$@"
}

function fbs() {
	in=${1:-cpp_protobuf_format}
	input=${2:-CppProgramData}
	mkdir -p $in
	chmod -R o+w $in
	for f in $input/*; do
	    i=$(basename $f)
	    echo $i
	    if [ ! -f $in/$i.fbs ]; then
		fast -v > $in/fast.version
		fast -S -G $input/$i $in/$i.fbs
	    fi
	done
}

function ggnn() {
	docker build --build-arg http_proxy=http://wwwcache.open.ac.uk:80 --build-arg https_proxy=http://wwwcache.open.ac.uk:80 -t ggnn ggnn > ggnn.log
	docker run -e http_proxy=http://wwwcache.open.ac.uk:80 -e https_proxy=http://wwwcache.open.ac.uk:80 --rm -v $(pwd):/e -it ggnn "$@"
}

function babi() {
	in=$1
	out=${in/protobuf/babi}-$2
	cp ggnn/ggnn-$2.py ggnn/ggnn.py
	mkdir -p $out/train $out/test
	chmod -R a+w $out
	for f in $in/*.fbs; do
	  i=$(basename $f)
	  i=${i/.fbs/}
	  if [ ! -f $out/train/train_$i.txt -o ! -f $out/test/test_$i.txt ]; then
	    ggnn $in/$i.fbs $out/train/train_$i.txt $out/test/test_$i.txt $out
	  fi
	done
	docker run -v $(pwd)/$out:/e --entrypoint bash -it ggnn -c "cp /usr/local/bin/ggnn /e/ggnn.py"
	cp $0 $out
}

function align() {
	docker build --build-arg http_proxy=http://wwwcache.open.ac.uk:80 --build-arg https_proxy=http://wwwcache.open.ac.uk:80 -t ggnn ggnn > ggnn.log
	docker run -v $(pwd):/e -w /e --entrypoint align -it ggnn "$@"
}

function prepare_dataset() {
	tag=$1
        cpp_folder=$2
        java_folder=${cpp_folder/cpp/java}
	if [ ! -f maps.cpp.pkl ]; then
	   cp "$cpp_folder"_babi_format_$tag/maps.cpp.pkl .
	fi
	if [ ! -f maps.java.pkl ]; then
	   cp "$java_folder"_babi_format_$tag/maps.java.pkl .
	fi
	mkdir -p cll_"$java_folder"_babi_format_$tag
        chmod o+w cll_"$java_folder"_babi_format_$tag
        chmod o+w .
	align --lang2=java "$java_folder"_babi_format_$tag cll_"$java_folder"_babi_format_$tag
        mv maps.cll.pkl cll_"$java_folder"_babi_format_$tag
        rm -f maps.cpp.pkl
        rm -f maps.java.pkl
        chmod o-w .
}

function generate_data() {
	rm -f $0.log
	tag=$1
	f=ggnn/ggnn-$2.py
	cp $f ggnn/ggnn.py
	g=${f/*-/}
	g=${g/.py/}
        cpp_folder=$3
        java_folder=${cpp_folder/cpp/java}
        fbs "$cpp_folder"_protobuf_format_$tag "$cpp_folder"_program_data | tee $0.log
        fbs "$java_folder"_protobuf_format_$tag "$java_folder"_program_data | tee $0.log
	babi "$cpp_folder"_protobuf_format_$tag $g | tee $0.log
	babi "$java_folder"_protobuf_format_$tag $g | tee $0.log
	prepare_dataset $tag-$2 $cpp_folder
}

#generate_data Oct-10-2018 0000028 github_cpp
#generate_data Oct-10-2018 0000028 cpp
generate_data Oct-15-2018 0000029 github_cpp
generate_data Oct-15-2018 0000029 cpp

	#prepare_dataset Oct-15-2018-0000029 github_cpp

        #cp cpp_babi_format_Oct-15-2018-0000029/maps.cpp.pkl .
        #cp java_babi_format_Oct-15-2018-0000029/maps.java.pkl .
        #chmod o+w maps.*.pkl
	#ggnn java_protobuf_format_Oct-15-2018/89.fbs java_babi_format_Oct-15-2018-0000029/train/train_89.txt java_babi_format_Oct-15-2018-0000029/test/test_89.txt
	#prepare_dataset Oct-15-2018-0000029 cpp
