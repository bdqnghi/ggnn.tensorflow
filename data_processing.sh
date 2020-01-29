DATA=sample_data
DATASET=java-small
TRAIN_DIR=../${DATA}/${DATASET}/training
TEST_DIR=../${DATA}/${DATASET}/test
VAL_DIR=../${DATA}/${DATASET}/validation
NUM_WORKER=10
PYTHON=python3

${PYTHON} data_processing.py --path ${TRAIN_DIR} --worker ${NUM_WORKER}
${PYTHON} data_processing.py --path ${TEST_DIR} --worker ${NUM_WORKER}
${PYTHON} data_processing.py --path ${VAL_DIR} --worker ${NUM_WORKER}