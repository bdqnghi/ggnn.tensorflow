DATA=sample_data
DATASET=java-small
MODEL=treecaps
TRAIN_DIR=../${DATA}/${DATASET}/training
TEST_DIR=../${DATA}/${DATASET}/test
VAL_DIR=../${DATA}/${DATASET}/validation
TRAIN_LABEL_VOCAB_PATH=../preprocessed_data/${MODEL}/${DATASET}/train_label_vocab.txt
TEST_LABEL_VOCAB_PATH=../preprocessed_data/${MODEL}/${DATASET}/test_label_vocab.txt
VALIDATION_LABEL_VOCAB_PATH=../preprocessed_data/${MODEL}/${DATASET}/val_label_vocab.txt
PYTHON=python3

${PYTHON} compute_label_vocabulary.py --input ${TRAIN_DIR} --output ${TRAIN_LABEL_VOCAB_PATH} 
${PYTHON} compute_label_vocabulary.py --input ${TEST_DIR} --output ${TEST_LABEL_VOCAB_PATH}
${PYTHON} compute_label_vocabulary.py --input ${VAL_DIR} --output ${VALIDATION_LABEL_VOCAB_PATH}