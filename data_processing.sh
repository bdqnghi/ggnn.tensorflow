DATA=sample_data
DATASET=java-small
TRAIN_DIR=${DATA}/${DATASET}/training
TEST_DIR=${DATA}/${DATASET}/test
VAL_DIR=${DATA}/${DATASET}/validation
PYTHON=python3

${PYTHON} data_processing.py --path ${TRAIN_DIR} 
${PYTHON} data_processing.py --path ${TEST_DIR} 
${PYTHON} data_processing.py --path ${VAL_DIR}