void Init() throws IOException {
    m_OutWindow.Init(false);
    com.badlogic.gdx.utils.compression.rangecoder.Decoder.InitBitModels(m_IsMatchDecoders);
    com.badlogic.gdx.utils.compression.rangecoder.Decoder.InitBitModels(m_IsRep0LongDecoders);
    com.badlogic.gdx.utils.compression.rangecoder.Decoder.InitBitModels(m_IsRepDecoders);
    com.badlogic.gdx.utils.compression.rangecoder.Decoder.InitBitModels(m_IsRepG0Decoders);
    com.badlogic.gdx.utils.compression.rangecoder.Decoder.InitBitModels(m_IsRepG1Decoders);
    com.badlogic.gdx.utils.compression.rangecoder.Decoder.InitBitModels(m_IsRepG2Decoders);
    com.badlogic.gdx.utils.compression.rangecoder.Decoder.InitBitModels(m_PosDecoders);
    m_LiteralDecoder.Init();
    int i;
    for (i = 0; i < Base.kNumLenToPosStates; i++) m_PosSlotDecoder[i].Init();
    m_LenDecoder.Init();
    m_RepLenDecoder.Init();
    m_PosAlignDecoder.Init();
    m_RangeDecoder.Init();
}
