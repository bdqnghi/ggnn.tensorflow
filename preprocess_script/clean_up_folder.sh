DATA=code2vec_data
DATASET=java-small
TRAIN_DIR=../${DATA}/${DATASET}/training
TEST_DIR=../${DATA}/${DATASET}/test
VAL_DIR=../${DATA}/${DATASET}/validation
PYTHON=python3

${PYTHON} clean_up_folder.py --path ${TRAIN_DIR} 
${PYTHON} clean_up_folder.py --path ${TEST_DIR} 
${PYTHON} clean_up_folder.py --path ${VAL_DIR}