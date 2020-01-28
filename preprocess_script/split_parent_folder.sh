DATA=code2vec_data
DATASET=java-large
TRAIN_DIR=../${DATA}/${DATASET}/training
TEST_DIR=../${DATA}/${DATASET}/test
VAL_DIR=../${DATA}/${DATASET}/validation
PYTHON=python3

${PYTHON} split_parent_folder.py --path ${TRAIN_DIR} 
${PYTHON} split_parent_folder.py --path ${TEST_DIR} 
${PYTHON} split_parent_folder.py --path ${VAL_DIR}